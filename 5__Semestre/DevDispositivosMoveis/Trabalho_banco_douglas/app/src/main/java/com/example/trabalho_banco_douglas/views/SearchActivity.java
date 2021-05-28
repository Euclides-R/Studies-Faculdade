package com.example.trabalho_banco_douglas.views;

import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx.recyclerview.widget.RecyclerView;

import android.content.Intent;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuInflater;
import android.view.View;
import android.widget.SearchView;

import com.example.trabalho_banco_douglas.R;
import com.example.trabalho_banco_douglas.database.Database;
import com.example.trabalho_banco_douglas.listview.ClickRecyclerViewInterface;
import com.example.trabalho_banco_douglas.listview.MyAdapter;
import com.example.trabalho_banco_douglas.models.User;
import com.example.trabalho_banco_douglas.services.user.ListUsersService;
import com.google.android.material.floatingactionbutton.FloatingActionButton;

import java.util.ArrayList;
import java.util.List;

public class SearchActivity extends AppCompatActivity implements ClickRecyclerViewInterface {

    private RecyclerView mRecyclerView;
    private RecyclerView.LayoutManager mLayoutManager;
    MyAdapter adapter;
    private List<User> usersList = new ArrayList<>();
    private List<User> usersListFiltered = new ArrayList<>();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_search);

        setaRecyclerView();


        loadUsers();

    }

    public boolean onCreateOptionsMenu(Menu menu) {
        MenuInflater menuInflater = getMenuInflater();
        menuInflater.inflate(R.menu.options_menu,menu);

        SearchView search = (SearchView) menu.findItem(R.id.searchIcon).getActionView();
        search.setOnQueryTextListener(new SearchView.OnQueryTextListener() {
            @Override
            public boolean onQueryTextSubmit(String query) {
                return false;
            }

            @Override
            public boolean onQueryTextChange(String newText) {
                searchUser(newText);
                return false;
            }
        });
        return true;
    }

    private void searchUser(String param)
    {
        usersListFiltered.clear();
//        User u = new User().setName("dsdsd").setAgency("dsdsd").setBalance("dsds").setAccount("dsd");
        for(User user: usersList) {

            if(user.getName().toLowerCase().contains(param.toLowerCase())
            ) {
                usersListFiltered.add(user) ;
            }

        }
        adapter.notifyDataSetChanged();
    }

    public void setaRecyclerView(){

        //Aqui é instanciado o Recyclerview
        mRecyclerView = (RecyclerView) findViewById(R.id.recyclerView);
        mLayoutManager = new LinearLayoutManager(this);
        mRecyclerView.setLayoutManager(mLayoutManager);

        adapter = new MyAdapter(this, usersListFiltered, this);
        mRecyclerView.setAdapter(adapter);
    }


    public void loadUsers() {


                ListUsersService listUsersService = new ListUsersService(this);
                List<User> users = listUsersService.execute();


                for(User user : users) {
                    usersList.add(user);
                }
                 usersListFiltered.addAll(usersList);

                adapter.notifyDataSetChanged();

    }

    @Override
    public void onCustomClick(Object object) {
        User user = (User) object;
        Intent intent = new Intent(this,ActionsActivity.class);
        intent.putExtra("id",user.getId());
        intent.putExtra("name",user.getName());
        intent.putExtra("account",user.getAccount());
        intent.putExtra("balance",user.getBalance());
        intent.putExtra("agency",user.getAgency());
        intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP | Intent.FLAG_ACTIVITY_SINGLE_TOP);
        startActivity(intent);
    }
}