package com.example.av1progdmoveis.services.veic;

import android.content.Context;
import android.database.Cursor;

import com.example.av1progdmoveis.database.DataBase;
import com.example.av1progdmoveis.models.Veiculo;

import java.util.ArrayList;
import java.util.List;

public class ListarVeiculos extends DataBase {
    public ListarVeiculos(Context context) {
        super(context);
    }

    public List<Veiculo> execute()
    {
        List<Veiculo> veiculos = new ArrayList<>();
        Cursor cursor = this.sqLiteDatabase.query("veiculos", new String[]{"id","placa","modelo","idade","valor"},null,null,null,null,null);

        while ( cursor.moveToNext()) {
            Veiculo car = new Veiculo();
            car.setId(cursor.getInt(0));
            car.setPlaca(cursor.getString(1));
            car.setAno(cursor.getString(2));
            car.setIdade(cursor.getString(3));
            car.setValorBase(cursor.getString(4));
            veiculos.add(car);
        }
        return veiculos;
    }
}
