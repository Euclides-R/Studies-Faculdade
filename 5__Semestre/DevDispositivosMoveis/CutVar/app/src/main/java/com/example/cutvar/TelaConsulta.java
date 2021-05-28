package com.example.multiplastelas;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import com.example.cutvar.MainActivity;
import com.example.cutvar.R;

public class TelaConsulta extends AppCompatActivity {

    EditText nome, idade, valorHora;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.consultar);
        nome = (EditText) findViewById(R.id.nome);
        idade = (EditText) findViewById(R.id.idade);
        valorHora = (EditText) findViewById(R.id.valorHora);

        Button btvoltar = (Button) findViewById(R.id.btvoltar);

        processarDadosLidos();
        btvoltar.setOnClickListener(new View.OnClickListener() {

                                        @Override
                                        public void onClick(View v) {
                                            Intent it = new Intent(TelaConsulta.this, MainActivity.class);
                                            startActivity(it);
                                        }
                                    }
        );


    }

    private void processarDadosLidos() {
        Intent it = getIntent();
        if (it != null) {

            Bundle bun = it.getExtras();
            com.example.multiplastelas.PessoaVO pes = (com.example.multiplastelas.PessoaVO) bun.get("pessoa");
            if (pes != null) {
                nome.setText(pes.getNome());
                idade.setText(String.valueOf(pes.getIdade()));
                valorHora.setText(String.valueOf(pes.getValorHora()));

            }
        }
    }

}