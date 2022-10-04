#ifndef _CENTREMARK__H_
#define _CENTREMARK__H_
#include <stdint.h>
#include <stddef.h>

typedef void (*cm_Hovering_f)(struct cm_MarkupDoc*,struct cm_DeviceInput*);

struct cm_DeviceInput {
    uint8_t *mouse_btn;
    uint16_t mouse_x, mouse_y;
};

struct cm_Hovering_info {
    struct cm_DeviceInput dev_input;
};

struct cm_Element {
    const char *type, *name;
    cm_Hovering_f hovering;
};

struct cm_MarkupDoc {
    struct cm_Element **elements;
};

struct cm_Renderable {
    float *positions, *misc;
    size_t pos_len, misc_len;
};

struct cm_Renderable centremark_construct(struct cm_MarkupDoc *doc);
void *centremark_flush_doc_input(struct cm_MarkupDoc *doc);
void *centremark_flush_element_input(struct cm_Element *doc);

#endif // _CENTREMARK__H_