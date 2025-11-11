#include <stdio.h>
#include <zip.h>

int main() {
    struct zip *z = zip_open("file.zip", 0, NULL);
    if (!z) return 1;

    char buf[512];
    struct zip_file *f;
    zip_int64_t n = zip_get_num_entries(z, 0);

    for (zip_int64_t i = 0; i < n; i++) {
        f = zip_fopen_index(z, i, 0);
        printf("\n-- %s --\n", zip_get_name(z, i, 0));

        int r;
        while ((r = zip_fread(f, buf, sizeof(buf))) > 0)
            fwrite(buf, 1, r, stdout);

        zip_fclose(f);
    }

    zip_close(z);
    return 0;
}
