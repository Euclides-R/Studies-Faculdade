package com.example.trabalho_banco_douglas.listview;


import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.recyclerview.widget.RecyclerView;

import com.example.trabalho_banco_douglas.R;
import com.example.trabalho_banco_douglas.models.User;

import java.util.List;

public class MyAdapter extends RecyclerView.Adapter<MyAdapter.RecyclerTesteViewHolder> {

    public static ClickRecyclerViewInterface clickRecyclerViewInterface;
    Context mctx;
    private List<User> mList;

    public MyAdapter(Context ctx, List<User> list, ClickRecyclerViewInterface clickRecyclerViewInterface) {
        this.mctx = ctx;
        this.mList = list;
        this.clickRecyclerViewInterface = clickRecyclerViewInterface;
    }

    @Override
    public RecyclerTesteViewHolder onCreateViewHolder(ViewGroup viewGroup, int i) {
        View itemView = LayoutInflater.from(viewGroup.getContext()).inflate(R.layout.items, viewGroup, false);
        return new RecyclerTesteViewHolder(itemView);
    }

    @Override
    public void onBindViewHolder(RecyclerTesteViewHolder viewHolder, int i) {
        User user = mList.get(i);

        viewHolder.viewNome.setText(user.getName());
        viewHolder.viewAccount.setText(user.getAccount());
        viewHolder.viewBalance.setText(user.getBalance());
        viewHolder.viewAgency.setText(user.getAgency());

    }

    @Override
    public int getItemCount() {
        return mList.size();
    }


    protected class RecyclerTesteViewHolder extends RecyclerView.ViewHolder {

        protected TextView viewNome , viewAgency , viewBalance , viewAccount;

        public RecyclerTesteViewHolder(final View itemView) {
            super(itemView);

            viewNome = (TextView) itemView.findViewById(R.id.recyclerName);
            viewAgency = (TextView) itemView.findViewById(R.id.recyclerAgency);
            viewBalance = (TextView) itemView.findViewById(R.id.recyclerBalance);
            viewAccount = (TextView) itemView.findViewById(R.id.recyclerAccount);

            //Setup the click listener
            itemView.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View v) {

                    clickRecyclerViewInterface.onCustomClick(mList.get(getLayoutPosition()));

                }
            });
        }
    }
}