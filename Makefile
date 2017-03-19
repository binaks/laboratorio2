#Comandos do sistema operacional
RM = rm -rf

#Compilador
CC=g++

#Variáveis para os subdiretórios
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test

#Opções de compilação
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

#Garante que os alvos desta lista não sejam confundidos com arquivos de mesmo nome
.PHONY: all clean distclean doxy debug

#Define o alvo para a compilação completa
#Define os alvos sequencia como dependências
#Ao final da compilação, remove os arquivos objeto
all: sequencia mdc dec2bin palindromo quadrado_recursivo

debug: CFLAGS += -g -O0
debug: sequencia mdc dec2bin palindromo quadrado_recursivo

#======================QUESTÃO1================================

#Alvo para a construção do executável sequencia
sequencia: $(OBJ_DIR)/iterat.o $(OBJ_DIR)/iterat.o $(OBJ_DIR)/rec.o $(OBJ_DIR)/msg.o $(OBJ_DIR)/main1.o
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $(MAKECMDGOALS) $^

#Alvo para a construção do objeto rec.o
#Define os arquivos rec.cpp e rec.h como dependencias
$(OBJ_DIR)/rec.o: $(SRC_DIR)/questao1/rec.cpp $(INC_DIR)/questao1/rec.h
	$(CC) -c $(CFLAGS) -o $@ $<

#Alvo para a construção do objeto msg.o
#Define os arquivos msg.cpp e msg.h como dependencias
$(OBJ_DIR)/msg.o: $(SRC_DIR)/questao1/msg.cpp $(INC_DIR)/questao1/msg.h
	$(CC) -c $(CFLAGS) -o $@ $<

#Alvo para a construção do objeto iterat.o
#Define os arquivos iterat.cpp e iterat.h como dependencias
$(OBJ_DIR)/iterat.o: $(SRC_DIR)/questao1/iterat.cpp $(INC_DIR)/questao1/iterat.h
	$(CC) -c $(CFLAGS) -o $@ $<

#Alvo para a construção do objeto main.o
$(OBJ_DIR)/main1.o: $(SRC_DIR)/questao1/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

#======================QUESTÃO2================================

#Alvo para a construção do executável mdc
mdc: $(OBJ_DIR)/calcmdc.o $(OBJ_DIR)/main2.o
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

#Alvo para a construção do objeto calcmdc.o
#Define os arquivos calcmdc.cpp e calcmdc.h como dependências
$(OBJ_DIR)/calcmdc.o: $(SRC_DIR)/questao2/calcmdc.cpp $(INC_DIR)/questao2/calcmdc.h
	$(CC) -c $(CFLAGS) -o $@ $<

#Alvo para a construção do objeto main2.o
$(OBJ_DIR)/main2.o: $(SRC_DIR)/questao2/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

#======================QUESTÃO3================================

#Alvo para a construção do executável dec2bin
dec2bin: $(OBJ_DIR)/conv.o $(OBJ_DIR)/main3.o
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

#Alvo para a construção do objeto conv.o
#Define os arquivos conv.cpp e conv.h como dependências
$(OBJ_DIR)/conv.o: $(SRC_DIR)/questao3/conv.cpp $(INC_DIR)/questao3/conv.h
	$(CC) -c $(CFLAGS) -o $@ $<

#Alvo para a construção do objeto main3.o
$(OBJ_DIR)/main3.o: $(SRC_DIR)/questao3/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

#======================QUESTÃO4================================

#Alvo para a construção do executável palindromo
palindromo: $(OBJ_DIR)/checapalindromo.o $(OBJ_DIR)/main4.o
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

#Alvo para a construção do objeto checapalindromo.o
#Define os arquivos checapalindromo.cpp e checapalindromo.h como dependências
$(OBJ_DIR)/checapalindromo.o: $(SRC_DIR)/questao4/checapalindromo.cpp $(INC_DIR)/questao4/checapalindromo.h
	$(CC) -c $(CFLAGS) -o $@ $<

#Alvo para a construção do objeto main4.o
$(OBJ_DIR)/main4.o: $(SRC_DIR)/questao4/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

#======================QUESTÃO5================================

#Alvo para a construção do executável quadrado_recursivo
quadrado_recursivo: $(OBJ_DIR)/qrecursivo.o $(OBJ_DIR)/main5.o
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^

#Alvo para a construção do objeto qrecursivo.o
#Define os arquviso qrecursivo.cpp e qrecursivo.h como dependências
$(OBJ_DIR)/qrecursivo.o: $(SRC_DIR)/questao5/qrecursivo.cpp $(INC_DIR)/questao5/qrecursivo.h
	$(CC) -c $(CFLAGS) -o $@ $<

#Alvo para a construção do objeto main5.cpp
$(OBJ_DIR)/main5.o: $(SRC_DIR)/questao5/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

#======================QUESTÃO6================================

#Alvo para a geração automática de documentação usando o Doxygen
#Sempre remove a documentação anterior (caso exista) e gera uma nova
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen

doc:
	doxygen

#Alvo usado para limpar os arquivos temporários (objeto)
#gerados durante a compilação, assim como os arquivos binários/executáveis
clean:
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*