# Compilatore
CC = gcc

# Flag di compilazione 
CFLAGS = -Wall -Wextra -g -Iinclude

# Nome dell'eseguibile finale
TARGET = seqalign

# Trova tutti i file .c nella cartella src/
SRCS = $(wildcard src/*.c)

# Crea i corrispettivi file oggetto .o
OBJS = $(SRCS:.c=.o)

# Regola principale
all: $(TARGET)

# Compila l'eseguibile finale
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Pulisce la cartella
clean:
	rm -f $(OBJS) $(TARGET)