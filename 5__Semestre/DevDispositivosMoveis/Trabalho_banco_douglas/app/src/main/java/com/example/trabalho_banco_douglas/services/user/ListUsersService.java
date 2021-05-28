package com.example.trabalho_banco_douglas.services.user;

import android.content.Context;
import android.database.Cursor;

import com.example.trabalho_banco_douglas.database.Database;
import com.example.trabalho_banco_douglas.models.User;

import java.util.ArrayList;
import java.util.List;

public class ListUsersService  extends Database {
    public ListUsersService(Context context) {
        super(context);
    }

    public List<User> execute()
    {
        List<User>  users = new ArrayList<>();
        Cursor cursor = this.sqLiteDatabase.query("users", new String[]{"id","name","balance","agency","account"},null,null,null,null,null);

        while ( cursor.moveToNext()) {
            User aluno = new User();
            aluno.setId(cursor.getInt(0));
            aluno.setName(cursor.getString(1));
            aluno.setBalance(cursor.getString(2));
            aluno.setAgency(cursor.getString(3));
            aluno.setAccount(cursor.getString(4));
            users.add(aluno);
        }
        return users;
    }
}
