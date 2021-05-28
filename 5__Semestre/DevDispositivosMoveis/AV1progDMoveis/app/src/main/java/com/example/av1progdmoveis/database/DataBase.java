package com.example.av1progdmoveis.database;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;

public abstract class DataBase {

    private Connection connection;
    protected SQLiteDatabase sqLiteDatabase;

    public DataBase(Context context)
    {
        connection = new Connection(context);
        sqLiteDatabase = connection.getWritableDatabase();


    }

}