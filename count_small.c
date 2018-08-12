#include <stdio.h>
#include <stdlib.h>

int check_permissions(char *ls_permission, char *required_permission) {
    for (int i = 0; i < 9; i++) {
        if (required_permission[i] != '-' && required_permission[i] != ls_permission[i]) {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char **argv) {
    if (argc <= 1 || argc >= 4) {
        fprintf(stderr, "USAGE: count_samll size [permissions]\n");
        return 1;
    }
    int upper_limit;
    char *required_permission = NULL;
    int filter_flag = 0;
    if (argc == 2) {
        upper_limit = strtol(argv[1], NULL, 10);
    } else if (argc == 3) {
        filter_flag = 1;
        required_permission = argv[2];
    }

    char type_permission[11];
    char hard_link[31];
    char owner[31];
    char group[31];
    char size[31];
    char month[31];
    char date[31];
    char modify_time[31];
    char name[31];
    int acc = 0;

    char junk1[31];
    char junk2[31];
    scanf("%s %s", junk1, junk2);
    while (scanf("%s %s %s %s %s %s %s %s %s", type_permission, hard_link, owner,
                  group, size, month, date, modify_time, name) == 9) {
        if (type_permission[0] == '-') { // If it is a regular file
            if (strtol(size, NULL, 10) < upper_limit) {
                if (filter_flag == 0) {
                    acc++;
                } else { // Need to check permission
                    if (check_permissions(type_permission + 1, required_permission) == 0) { // OK!
                        acc++;
                    }
                }
            }
        }
    }
    printf("%d\n", acc);

    return 0;
}
