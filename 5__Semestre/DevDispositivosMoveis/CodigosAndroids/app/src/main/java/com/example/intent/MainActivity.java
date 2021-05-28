package com.example.intent;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.RadioGroup;

public class MainActivity extends AppCompatActivity {
    PessoaVO pes;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


        Button btCalcula = (Button) findViewById(R.id.btcontinuar);
        btCalcula.setOnClickListener(new View.OnClickListener() {
                                         @Override
                                         public void onClick(View v) {
                                             RadioGroup rg = (RadioGroup) findViewById((R.id.rgopcoes));
                                             int op = rg.getCheckedRadioButtonId();
                                             if (op == R.id.cadastro) {

                                                cadastro();
                                             } else {
                                                 if (op == R.id.consulta) {
                                                     consulta();
                                                 } else {
                                                     AlertDialog.Builder dialogo = new AlertDialog.Builder(
                                                             MainActivity.this);
                                                     dialogo.setTitle("Cadastro incorreto");
                                                     dialogo.setMessage("Primeiramente cadastrar os dados.");
                                                     dialogo.setNeutralButton("OK", null);
                                                     dialogo.show();
                                                 }
                                             }


                                         }
                                     }
        );
    }

    final int CADASTRO = 1;

    private void cadastro(){
        Intent it = new Intent(this,TelaCadastro.class);
        startActivityForResult (it,CADASTRO);
    }

    private void consulta(){
        Intent it = new Intent(this,TelaConsulta.class);
        Bundle bun = new Bundle();
        bun.putSerializable("pessoa",pes);
        it.putExtras(bun);
        startActivity (it);



                ;

    }
    protected void onActivityResult(int requestCode, int resultCode, Intent it) {
        super.onActivityResult(requestCode, resultCode, it);
        if ((resultCode == RESULT_OK) && (requestCode == CADASTRO)) {
            Bundle bun = it.getExtras();
            pes = (PessoaVO) bun.get("pessoa");
            Log.i("Nome: ", pes.getNome());

            Log.i("Idade: ", String.valueOf(pes.getIdade()));
            Log.i("Valor Hora: ", String.valueOf(pes.getValorHora()));
        }
    }

}