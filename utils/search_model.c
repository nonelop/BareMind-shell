#include "search.h"
#include "models_database/models.h"
#include <string.h>

int search_model(char* short_name) {
    for (int i = 0; i < models_count; i++) {
        if (short_name == models_list[i]->short_name) return 1;
    }
    return 0;
}
