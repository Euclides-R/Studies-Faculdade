package com.example.trabalho_banco_douglas.services.user;

import android.content.ContentValues;
import android.content.Context;

import com.example.trabalho_banco_douglas.database.Database;
import com.example.trabalho_banco_douglas.models.User;

public class UpdateUserService extends Database {
    public UpdateUserService(Context context) {
        super(context);
    }

    public void execute(User user)
    {
        String strSQL = "UPDATE users SET name = '"+user.getName()+"', agency ='"+user.getAgency()+"', balance = '"+user.getBalance()+"', account ='"+user.getAccount()+"' WHERE id = "+user.getId();
        this.sqLiteDatabase.execSQL(strSQL);
    }
}
