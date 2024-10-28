#include "get_next_line.h"

int main(void) {
		char *line;
		int count = 0, fd = open("text.txt", O_RDONLY);

		if (fd < 0)
			return 1;
			while ((line = get_next_line(fd)) && count < 25) {
				printf("line %d : %s", count++, line);
				free(line);
		}
		free(line);
		close(fd);
		return 0;
}
