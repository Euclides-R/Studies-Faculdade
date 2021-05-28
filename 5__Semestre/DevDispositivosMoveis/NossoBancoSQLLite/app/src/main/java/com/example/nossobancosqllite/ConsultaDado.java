package com.example.nossobancosqllite;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.database.Cursor;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListView;
import android.widget.SimpleAdapter;
import android.widget.SimpleCursorAdapter;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.HashMap;
public class ConsultaDado extends AppCompatActivity implements
        AdapterView.OnItemClickListener {
    ListView listaView;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_consulta_dado);
        ControlaBanco controle = new ControlaBanco(getBaseContext());
        ArrayList<HashMap<String, String>> registros = controle.carregaDados();
        // Array que define as chaves do HashMap
        String[] fromNomeCampos = new String[] {CriaBancoSQLite.ID, "titulo"};
        int[] toIdViews = new int[] {R.id.idLivro, R.id.nomeLivro};
        /*O SimpleAdapter aceita layout personalizado sem exigir o trabalho com um getView() e outros métodos de adapter. Como é o caso do BaseAdapter, por exemplo. */
        SimpleAdapter adaptador = new SimpleAdapter(this, registros,R.layout.activity_consulta_dado, fromNomeCampos, toIdViews);
        this.listaView = (ListView)findViewById(R.id.listView);
        this.listaView.setAdapter(adaptador);
        this.listaView.setOnItemClickListener(this);
    }
    @Override
    public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
        Log.i("Minha LOG: ", "ExemploListView.onItemClick posicao: " + position  + ", id: " + id);
        // Pega o item naquela posição
        Object o = this.listaView.getAdapter().getItem(position);
        String item = o.toString();
        // exibe um alerta
        Toast.makeText(this, "Você selecionou: " + item, Toast.LENGTH_SHORT)
                .show();
    }
}