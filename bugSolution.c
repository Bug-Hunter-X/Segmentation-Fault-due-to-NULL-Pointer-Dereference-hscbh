int main() {
  int* ptr = NULL;
  if (ptr != NULL) { 
    *ptr = 10; 
  } else {
    printf("Error: Pointer is NULL\n");
    // Handle the error appropriately, e.g., return an error code or exit.
    return 1; 
  }
  return 0;
}