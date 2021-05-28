package com.example.trabalho_banco_douglas.views;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.Toast;

import com.example.trabalho_banco_douglas.R;
import com.example.trabalho_banco_douglas.models.User;
import com.example.trabalho_banco_douglas.services.user.InsertUserService;

public class CreateActivity extends AppCompatActivity {

    private EditText name , balance , account , agency;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_create);

        name = (EditText) findViewById(R.id.name);
        balance = (EditText) findViewById(R.id.balance);
        account = (EditText) findViewById(R.id.account);
        agency = (EditText) findViewById(R.id.agency);
    }

    public void createUser(View event)
    {
        final String mName = name.getText().toString();
        final String mBalance = balance.getText().toString();
        final String mAccount = account.getText().toString();
        final String mAgency = agency.getText().toString();

        User user = new User()
                .setName(mName)
                .setAccount(mAccount)
                .setAgency(mAgency)
                .setBalance(mBalance);

        InsertUserService insert = new InsertUserService(this);


        final long result = insert.execute(user);

        if(result != -1) {
            Toast.makeText(this,"Usuário inserido com uscesso",Toast.LENGTH_LONG).show();
            Intent intent = new Intent(this,MainActivity.class);
            startActivity(intent);
            return;
        }
        Toast.makeText(this,"Algum erro aconteceu !",Toast.LENGTH_LONG).show();
    }
}