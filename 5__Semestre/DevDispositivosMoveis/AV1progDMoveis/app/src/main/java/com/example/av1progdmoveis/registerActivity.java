package com.example.av1progdmoveis;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.os.Bundle;

import com.example.av1progdmoveis.listView.MyAdapter;
import com.example.av1progdmoveis.models.Veiculo;
import com.example.av1progdmoveis.services.veic.ListarVeiculos;

import java.util.ArrayList;
import java.util.List;

public class registerActivity extends AppCompatActivity {
    private RecyclerView mRecyclerView;
    private RecyclerView.LayoutManager mLayoutManager;
    MyAdapter adapter;
    private List<Veiculo> veiculosList = new ArrayList<>();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_register);

        setaRecyclerView();
        loadVeic();
    }

    public void setaRecyclerView(){

        //Aqui é instanciado o Recyclerview
        mRecyclerView = (RecyclerView) findViewById(R.id.recyclerView);
        mLayoutManager = new LinearLayoutManager(this);
        mRecyclerView.setLayoutManager(mLayoutManager);

        adapter = new MyAdapter(this, veiculosList);
        mRecyclerView.setAdapter(adapter);
    }


    public void loadVeic() {


        ListarVeiculos listUsersService = new ListarVeiculos(this);
        List<Veiculo> veiculos = listUsersService.execute();


        for(Veiculo veiculo : veiculos) {
            veiculosList.add(veiculo);
        }

        adapter.notifyDataSetChanged();

    }

}