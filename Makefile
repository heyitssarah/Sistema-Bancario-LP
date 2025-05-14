#Executável
PROG = programa

#Compilador
CC = g++

#Diretivas de compilação
CPPFLAGS = -Wall -std=c++11

#Arquivos objeto
OBJS = main.o cliente.o contaBancaria.o

# Alvo padrão
$(PROG): $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)

#Regras de contrução de arquivos objeto
main.o: main.cpp cliente.h contaBancaria.h
	$(CC) $(CPPFLAGS) -c main.cpp

Cliente.o: cliente.cpp cliente.h
	$(CC) $(CPPFLAGS) -c cliente.cpp

ContaBancaria.o: contaBancaria.cpp contaBancaria.h cliente.h
	$(CC) $(CPPFLAGS) -c contaBancaria.cpp

#Regra de limpeza de arquivos
clean:
	del /Q *.o *.exe 2>nul


