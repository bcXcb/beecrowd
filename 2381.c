#include <stdio.h>
#include <string.h>

int main() {
    int n, s;

	scanf("%d %d", &n, &s);

    char students[n][51];
	char auxiliary[51];

    for (int i = 0; i < n; i++) { scanf("%s", students[i]); }

	// sort
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (strcmp(students[i], students[j]) < 0) {
				strcpy(auxiliary, students[i]);
				strcpy(students[i], students[j]);
				strcpy(students[j], auxiliary);
			}
		}
	}

    printf("%s\n", students[s - 1]);

    return 0;
}
