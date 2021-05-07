#variables
SRC_FILES = main.c ./src/list.c
OBJ_FILES = main.o ./src/list.o
EXE = programa

#regla pattern
# para generar un archivo .o se busca el archivo con el mismo nombre que termine
# en .c
# la variable automática $< referencia a la dependencia
# la variable automática $@ referencia la regla o el resultado
%.o: %.c
	@echo "compilando $<..."
	g++ -c $< -o $@

$(EXE): $(OBJ_FILES)
	@echo "linkeando $(EXE)..."
	g++ $(OBJ_FILES) -o $(EXE)

#regla clean, no tiene dependencias, borra el ejecutable
clean:
	rm -f $(OBJ_FILES) $(EXE)

#regla run, depende del ejecutable
run: $(EXE)
	./$(EXE)

