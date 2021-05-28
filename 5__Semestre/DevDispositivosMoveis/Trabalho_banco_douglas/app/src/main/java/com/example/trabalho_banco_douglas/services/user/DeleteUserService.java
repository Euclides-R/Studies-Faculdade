package com.example.trabalho_banco_douglas.services.user;

import android.content.ContentValues;
import android.content.Context;

import com.example.trabalho_banco_douglas.database.Database;
import com.example.trabalho_banco_douglas.models.User;

public class DeleteUserService extends Database {

    public DeleteUserService(Context context)
    {
        super(context);
    }

    public void execute(int id)
    {

        String strSQL = "DELETE FROM users WHERE id="+id;
        this.sqLiteDatabase.execSQL(strSQL);
    }

}