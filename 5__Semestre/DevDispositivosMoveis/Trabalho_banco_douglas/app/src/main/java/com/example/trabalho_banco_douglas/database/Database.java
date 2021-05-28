package com.example.trabalho_banco_douglas.database;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;

public abstract class Database {

   private Connection connection;
   protected SQLiteDatabase sqLiteDatabase;

   public Database(Context context)
   {
       connection = new Connection(context);
       sqLiteDatabase = connection.getWritableDatabase();


   }

}
