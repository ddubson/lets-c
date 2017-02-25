#include <stdio.h>

void opening_an_existing_file();
void reading_from_a_file();

int main() {
  opening_an_existing_file();
  reading_from_a_file();

  return 0;
}

void opening_an_existing_file() {
  // Pointer to a file stream
  FILE *fp;

  // fopen does 3 things:
  // - searches for file, '
  // - loads data from file to a memory location called 'buffer' (creates a stream and the buffer is assoc. with that stream.)
  // - returns a pointer to the stream.
  fp = fopen("10_file_io.c", "r");

  // In Read Mode (r):
  // If file exists, pointer points to first character in the file.
  // If file does not exist, fopen returns a null pointer.

  // In Append Mode (a):
  // If file exists, pointer points to the last character in the file.

  // If you add a "+" to the mode, you can force fopen to create a file if it does
  // not exist.
}

void reading_from_a_file() {
  FILE *fp;
  char ch;

  fp = fopen("10_file_io_text.md", "r");

  while(1) {
    // fgetc -> read current character then advance the pointer to next position.
    ch = fgetc(fp);
    if(ch == EOF) {
      break;
    }

    printf("%c", ch);
  }
}
