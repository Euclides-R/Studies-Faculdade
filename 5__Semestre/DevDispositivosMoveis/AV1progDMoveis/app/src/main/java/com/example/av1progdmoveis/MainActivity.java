package com.example.av1progdmoveis;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import com.example.av1progdmoveis.models.Veiculo;
import com.example.av1progdmoveis.services.veic.NewRegister;

public class MainActivity extends AppCompatActivity {
    Button listar;
    EditText placa, modelo, idade, valorBase;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        listar = (Button) findViewById(R.id.buttonListar);
        placa = (EditText) findViewById(R.id.placainput);
        modelo = (EditText) findViewById(R.id.modelYear);
        idade = (EditText) findViewById(R.id.inputAge);
        valorBase = (EditText) findViewById(R.id.valueInput);
        listarPlacas();
    }

    public void registerNew(View event) {
        try {
            final String pPlaca = placa.getText().toString();
            final String mModelo = modelo.getText().toString();
            final String iIdade = idade.getText().toString();
            final String vValorBase = valorBase.getText().toString();

            Veiculo user = new Veiculo().setPlaca(pPlaca).setAno(mModelo).setIdade(iIdade).setValorBase(vValorBase);
            System.out.println(user);
            NewRegister insert = new NewRegister(this);

            final long result = insert.execute(user);

            if (result != -1) {
                Toast.makeText(this, "Usuário inserido com sucesso", Toast.LENGTH_LONG).show();
                Intent intent = new Intent(this, MainActivity.class);
                startActivity(intent);
                return;
            }
            Toast.makeText(this, "Algum erro aconteceu!", Toast.LENGTH_LONG).show();
        } catch (Exception e) {
            System.out.println(e);
        }
    }

    private void listarPlacas()
    {
        listar.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(getApplicationContext(),registerActivity.class);
                startActivity(intent);
            }
        });
    }
}