#include <openssl/sha.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  char *message = {"Sample Message"};
  unsigned char digest[SHA256_DIGEST_LENGTH];

  SHA256_CTX sha_ctx;
  SHA256_Init(&sha_ctx);
  SHA256_Update(&sha_ctx, message, sizeof(message));
  SHA256_Final(digest, &sha_ctx);

  printf("%s\n", message);

  for (int i = 0; i < sizeof(digest); ++i) {
    printf("%x", digest[i]);
  }
  printf("\n");
  return 0;
}
