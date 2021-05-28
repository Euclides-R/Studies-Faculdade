create table provafinal(
	nome varchar(30) not null,
	id_agencia int not null,
	id_conta int not null,
	nasc int not null,
	saldo real not null,
	primary key(id_conta)
);

update provafinal set saldo = saldo + 154.87 where id_conta=2582;

select * from provafinal;

drop table provafinal;

UPDATE provafinal SET saldo = saldo+255.88 where id_conta = 2582;