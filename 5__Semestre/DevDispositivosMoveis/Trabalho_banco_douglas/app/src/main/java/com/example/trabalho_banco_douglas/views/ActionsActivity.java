package com.example.trabalho_banco_douglas.views;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.SearchView;
import android.widget.Toast;

import com.example.trabalho_banco_douglas.R;
import com.example.trabalho_banco_douglas.models.User;
import com.example.trabalho_banco_douglas.services.user.DeleteUserService;
import com.example.trabalho_banco_douglas.services.user.UpdateUserService;

public class ActionsActivity extends AppCompatActivity {

    private EditText balance , name , account , agency;
    private Button buttonEdit , buttonDelete;
    private int idIntent;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_actions);

        balance = (EditText) findViewById(R.id.balanceEdit);
        name = (EditText) findViewById(R.id.nameEdit);
        agency = (EditText) findViewById(R.id.agencyEdit);
        account = (EditText) findViewById(R.id.accountEdit);
        buttonEdit = (Button) findViewById(R.id.btnEdit);
        buttonDelete = (Button) findViewById(R.id.deleteUser);
        getDatasIntent();
        onClickEdit();
        onClickDelete();
    }

  private void getDatasIntent()
  {
      Intent intent = getIntent();
      idIntent = intent.getIntExtra("id",0);
      String nameIntent = intent.getStringExtra("name");
      String agencyIntent = intent.getStringExtra("agency");
      String balanceIntent = intent.getStringExtra("balance");
      String accountIntent = intent.getStringExtra("account");

      balance.setText(balanceIntent);
      name.setText(nameIntent);
      agency.setText(agencyIntent);
      account.setText(accountIntent);




  }

  private User getDatasInputs()
  {
      String mName = name.getText().toString();
      String mAccount = account.getText().toString();
      String mAgency = agency.getText().toString();
      String mBalance = balance.getText().toString();

      return new User().setAccount(mAccount).setBalance(mBalance).setAgency(mAgency).setName(mName).setId(idIntent);
  }

  private void onClickEdit()
  {
      buttonEdit.setOnClickListener(new View.OnClickListener() {
          @Override
          public void onClick(View v) {
              UpdateUserService updateUserService = new UpdateUserService(getApplicationContext());
              User user = getDatasInputs();
              updateUserService.execute(user);
              System.out.println(user.getId());

              Intent intent = new Intent(getApplicationContext(), SearchActivity.class);

              startActivity(intent);
              Toast.makeText(ActionsActivity.this, "Usuário alterado com sucesso", Toast.LENGTH_SHORT).show();
          }
      });
  }

    private void onClickDelete()
    {
        buttonDelete.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                DeleteUserService deleteUserService = new DeleteUserService(getApplicationContext());
                deleteUserService.execute(idIntent);

                Intent intent = new Intent(getApplicationContext(), SearchActivity.class);

                startActivity(intent);
                Toast.makeText(ActionsActivity.this, "Usuário deletado com sucesso", Toast.LENGTH_SHORT).show();
            }
        });
    }
}