package com.example.trabalho_banco_douglas.services.user;

import android.content.ContentValues;
import android.content.Context;

import com.example.trabalho_banco_douglas.database.Database;
import com.example.trabalho_banco_douglas.models.User;

public class InsertUserService extends Database {

    public InsertUserService(Context context)
    {
        super(context);
    }

    public long execute(User user)
    {
        ContentValues contentValues = new ContentValues();
        contentValues.put("name" , user.getName());
        contentValues.put("agency",user.getAgency());
        contentValues.put("balance",user.getBalance());
        contentValues.put("account",user.getAccount());

        long response = this.sqLiteDatabase.insert("users",null,contentValues);
        return response;
    }

}
