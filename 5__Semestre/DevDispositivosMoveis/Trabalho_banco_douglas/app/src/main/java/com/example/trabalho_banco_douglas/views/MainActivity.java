package com.example.trabalho_banco_douglas.views;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;

import com.example.trabalho_banco_douglas.R;

public class MainActivity extends AppCompatActivity {

    private Intent intent;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    private void setActivity(Class<?> context)
    {
         intent = new Intent(this,context);
         startActivity(intent);
    }


    public void search(View event)
    {
        this.setActivity(SearchActivity.class);
    }

    public void create(View event)
    {
        this.setActivity(CreateActivity.class);
    }




}