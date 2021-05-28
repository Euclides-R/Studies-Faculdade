package com.example.multiplastelas;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import com.example.cutvar.R;

public class TelaCadastro extends AppCompatActivity {

    EditText nome,idade,valorHora;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.cadastro);
        nome = (EditText) findViewById(R.id.nome);
        idade = (EditText) findViewById(R.id.idade);
        valorHora = (EditText) findViewById(R.id.valorHora);
        Button btcadastrar = findViewById(R.id.btcadastrar);
        btcadastrar.setOnClickListener( new View.OnClickListener(){

                                            @Override
                                            public void onClick(View v) {
                                                processarDadosLidoseDevolver();
                                            }
                                        }
        );
    }

    private void processarDadosLidoseDevolver() {
        Intent it = new Intent();
        Bundle bun = new Bundle();
        com.example.multiplastelas.PessoaVO pes = new com.example.multiplastelas.PessoaVO();
        pes.setNome(nome.getText().toString());
        pes.setIdade(Integer.parseInt(idade.getText().toString()));
        pes.setValorHora(Double.parseDouble(valorHora.getText()
                .toString()));
        bun.putSerializable("pessoa", pes);
        it.putExtras(bun);
        setResult(RESULT_OK, it);
        finish();
    }

}