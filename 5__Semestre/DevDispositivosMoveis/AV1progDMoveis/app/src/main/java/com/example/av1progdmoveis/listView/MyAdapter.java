package com.example.av1progdmoveis.listView;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;

import androidx.recyclerview.widget.RecyclerView;

import com.example.av1progdmoveis.R;
import com.example.av1progdmoveis.models.Veiculo;

import java.util.List;

public class MyAdapter extends RecyclerView.Adapter<MyAdapter.RecyclerTesteViewHolder>  {
    Context mctx;
    private List<Veiculo> mList;

    public MyAdapter(Context ctx, List<Veiculo> list) {
        this.mctx = ctx;
        this.mList = list;

    }

    @Override
    public RecyclerTesteViewHolder onCreateViewHolder(ViewGroup viewGroup, int i) {
        View itemView = LayoutInflater.from(viewGroup.getContext()).inflate(R.layout.itens, viewGroup, false);
        return new RecyclerTesteViewHolder(itemView);
    }

    @Override
    public void onBindViewHolder(RecyclerTesteViewHolder viewHolder, int i) {
        Veiculo veiculo = mList.get(i);

        viewHolder.viewPlaca.setText(veiculo.getPlaca());
        viewHolder.viewAno.setText(veiculo.getAno());
        viewHolder.viewIdade.setText(veiculo.getIdade());
        viewHolder.viewValorBase.setText(veiculo.getValorBase());

    }

    @Override
    public int getItemCount() {
        return mList.size();
    }


    protected class RecyclerTesteViewHolder extends RecyclerView.ViewHolder {

        protected TextView viewPlaca  , viewAno , viewIdade,viewValorBase;

        public RecyclerTesteViewHolder(final View itemView) {
            super(itemView);

            viewPlaca = (TextView) itemView.findViewById(R.id.recyclerPlaca);
            viewAno = (TextView) itemView.findViewById(R.id.recyclerAno);
            viewIdade = (TextView) itemView.findViewById(R.id.recyclerIdade);
            viewValorBase = (TextView) itemView.findViewById(R.id.recyclerValorBase);

            //Setup the click listener

        }
    }
}