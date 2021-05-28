package com.example.av1progdmoveis.services.veic;

import android.content.ContentValues;
import android.content.Context;
import android.provider.ContactsContract;

import com.example.av1progdmoveis.database.DataBase;
import com.example.av1progdmoveis.models.Veiculo;

public class NewRegister extends DataBase {

    public NewRegister(Context context)
    {
        super(context);
    }

    public long execute(Veiculo Veiculo)
    {
        ContentValues contentValues = new ContentValues();
        contentValues.put("placa" , Veiculo.getPlaca());
        contentValues.put("modelo", Veiculo.getAno());
        contentValues.put("idade", Veiculo.getIdade());
        contentValues.put("valor", Veiculo.getValorBase());

        long response = this.sqLiteDatabase.insert("veiculos",null,contentValues);
        return response;
    }
}
