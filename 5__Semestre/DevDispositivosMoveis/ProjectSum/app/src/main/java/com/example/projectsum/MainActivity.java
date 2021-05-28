package com.example.projectsum;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

public class MainActivity extends AppCompatActivity {

    // regiao dos atributos
    EditText ednum1;
    EditText ednum2;
    EditText edres;
    EditText eDiv;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        ednum1 = (EditText) findViewById(R.id.num1);
        ednum2 = (EditText) findViewById(R.id.num2);
        edres = (EditText) findViewById(R.id.res);
        eDiv = (EditText) findViewById(R.id.resDiv);

        Button btMostrar = (Button) findViewById(R.id.botao);
        Button btDiv = (Button) findViewById(R.id.botaoDiv);
        Button botaoSub = (Button) findViewById((R.id.botaoSub));
        Button botaoMult = (Button) findViewById((R.id.botaoMult));


        btMostrar.setOnClickListener(new View.OnClickListener() {

            public void onClick(View arg0) {

                // Dentro deste método esta a vida do botão.
                String strNum1 = ednum1.getText().toString();
                String strNum2 = ednum2.getText().toString();
                double dnum1 = Double.parseDouble(strNum1);
                double dnum2 = Double.parseDouble(strNum2);

                double resultado = dnum1 + dnum2;

                edres.setText(String.valueOf(resultado));

            }
        });

        btDiv.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String strNum1 = ednum1.getText().toString();
                String strNum2 = ednum2.getText().toString();
                double dnum1 = Double.parseDouble(strNum1);
                double dnum2 = Double.parseDouble(strNum2);

                double resDiv = dnum1 / dnum2;
                eDiv.setText(String.valueOf(resDiv));
            }
        });

        botaoSub.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String strNum1 = ednum1.getText().toString();
                String strNum2 = ednum2.getText().toString();
                double dnum1 = Double.parseDouble(strNum1);
                double dnum2 = Double.parseDouble(strNum2);

                double resDiv = dnum1 - dnum2;
                edres.setText(String.valueOf(resDiv));
            }
        });

        botaoMult.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String strNum1 = ednum1.getText().toString();
                String strNum2 = ednum2.getText().toString();
                double dnum1 = Double.parseDouble(strNum1);
                double dnum2 = Double.parseDouble(strNum2);

                double resDiv = dnum1 * dnum2;
                edres.setText(String.valueOf(resDiv));
            }
        });
    }

}