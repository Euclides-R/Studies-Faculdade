package com.example.checkbutton;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.CheckBox;

import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.Locale;

public class MainActivity extends AppCompatActivity {

    CheckBox chktvled;
    CheckBox chktvlcd;
    CheckBox chktvplasma;
    CheckBox chktvtubo;
    CheckBox chkrdlp;
    CheckBox chkrddvd;
    CheckBox chkrdblueray;
    CheckBox chkdvdsony;
    CheckBox chkdvdphilips;
    CheckBox chkdvdoutros;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        chktvled = (CheckBox) findViewById(R.id.chktvled);
        chktvlcd = (CheckBox) findViewById(R.id.chktvlcd);
        chktvplasma = (CheckBox) findViewById(R.id.chktvplasma);
        chktvtubo = (CheckBox) findViewById(R.id.chktvtubo);
        chkrdlp = (CheckBox) findViewById(R.id.chktvlp);
        chkrddvd = (CheckBox) findViewById(R.id.chktvdvd);
        chkrdblueray = (CheckBox) findViewById(R.id.chktvblueray);
        chkdvdsony = (CheckBox) findViewById(R.id.chktvsony);
        chkdvdphilips = (CheckBox) findViewById(R.id.chktvphilips);
        chkdvdoutros = (CheckBox) findViewById(R.id.chktvoutros);
        Button btnCon = (Button) findViewById((R.id.btnConserto));
        Button btnPre = (Button) findViewById((R.id.btnPrecos));

        btnCon.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                double total = 0.0;
                if (chktvled.isChecked())
                    total += 100;
                if (chktvlcd.isChecked())
                    total += 100;
                if (chktvplasma.isChecked())
                    total += 100;
                if (chktvtubo.isChecked())
                    total += 100;
                if (chkrdlp.isChecked())
                    total += 100;
                if (chkrddvd.isChecked())
                    total += 100;
                if (chkrdblueray.isChecked())
                    total += 100;
                if (chkdvdsony.isChecked())
                    total += 100;
                if (chkdvdphilips.isChecked())
                    total += 100;
                if (chkdvdoutros.isChecked())
                    total += 100;
                AlertDialog.Builder confirma = new AlertDialog.Builder(MainActivity.this);
                confirma.setTitle("Confima Conserto‼");
                NumberFormat formatter;
                formatter = DecimalFormat.getCurrencyInstance(new Locale("pt", "BR"));
                formatter.setMinimumFractionDigits(2);
                confirma.setMessage("Obrigado pela confiança e volte sempre❗❗" + formatter.format(total));
                confirma.show();
            }
        });

        btnPre.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                AlertDialog.Builder precos = new AlertDialog.Builder(MainActivity.this);
                precos.setMessage("LED: R$ 100.00\nLCD: R$ 100.00\nPLASMA: R$ 100.00\nTUBO: R$ 100.00\nLP: R$ 100.00\nDVD: R$ 100.00\nBLUE RAY: R$ 100.00\nSONY: R$ 100.00\nPHILIPS: R$ 100.00\nOUTROS: R$ 100.00\n");
                precos.setNeutralButton("OK", null);
                precos.show();

            }
        });



        /*
        chkarroz = (CheckBox) findViewById(R.id.chkarroz);
        chkleite = (CheckBox) findViewById(R.id.chkleite);
        chkcarne = (CheckBox) findViewById(R.id.chkcarne);
        chkfeijao = (CheckBox) findViewById(R.id.chkfeijao);
        Button bttotal = (Button) findViewById(R.id.bttotal);
        bttotal.setOnClickListener(new View.OnClickListener() {
            public void onClick(View arg0) {
                double total = 0;
                if (chkarroz.isChecked())
                    total += 2.69;
                if (chkleite.isChecked())
                    total += 5.00;
                if (chkcarne.isChecked())
                    total += 9.7;
                if (chkfeijao.isChecked())
                    total += 2.30;
                // Button alert
                AlertDialog.Builder dialogo = new AlertDialog.Builder(MainActivity.this);
                dialogo.setTitle("Aviso‼");
                NumberFormat formatter;
                formatter = DecimalFormat.getCurrencyInstance(new Locale("pt", "BR"));
                formatter.setMinimumFractionDigits(2);
                dialogo.setMessage("Valor total da compra: " + formatter.format(total));
                dialogo.setNeutralButton("Ok", null);
                dialogo.show();
            }
        });
    }*/
    }
}