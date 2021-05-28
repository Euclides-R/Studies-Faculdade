package com.example.nossobancosqllite;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;
public class MainActivity extends AppCompatActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        EditText titulo = (EditText) findViewById(R.id.titulo);
        EditText autor = (EditText) findViewById(R.id.autor);
        EditText editora = (EditText) findViewById(R.id.editora);

        Button brCadastrar = (Button) findViewById(R.id.brCadastrar);

        brCadastrar.setOnClickListener((new View.OnClickListener() {
            @Override
            public void onClick(View v) {
               // vamos inserir o dado
                ControlaBanco controle = new ControlaBanco(MainActivity.this);

                String localTitulo = titulo.getText().toString();
                String localAutor = autor.getText().toString();
                String localEditora = editora.getText().toString();
                String resultado = controle.inserir (localTitulo, localAutor, localEditora);
                Toast.makeText(getApplicationContext(), resultado, Toast.LENGTH_LONG).show();
                System.out.println ("resultado:"+ resultado);
            }
        }));
        Button brListar= (Button) findViewById(R.id.botaolistar);
        brListar.setOnClickListener((new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                // vamos listar os itens gravados o dado
                CarregaTelaListar();
            }
        }));
    }
    private void CarregaTelaListar() {
       setContentView(R.layout.activity_consulta_dado);
        Intent intent = new Intent(MainActivity.this, ConsultaDado.class);
        startActivity(intent);
        finish();
    }
}