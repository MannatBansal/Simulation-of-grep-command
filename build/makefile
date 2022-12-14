src_dir := ../src
bin_dir := ../bin
inc_dir := ../inc
obj_dir := ../obj
lib_dir := ../lib

EXE := $(bin_dir)/grep
SRC := $(wildcard $(src_dir)/*.c)
OBJ := $(SRC:$(src_dir)/%.c= $(obj_dir)/%.o)

CC := gcc
CIFLAGS := -I $(inc_dir)
CFLAGS := -Wall -Werror -c -g
LDFLAGS := -Llib
LDLIBS := -lm


all: $(EXE)

$(EXE) : $(OBJ) | $(bin_dir)
		$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(obj_dir)/%.o : $(src_dir)/%.c | $(obj_dir)
		$(CC) $(CIFLAGS) $(CFLAGS) $< -o $@

$(bin_dir) $(obj_dir) :
		mkdir -p $@

clean:
		@$(RM) -rv $(bin_dir) $(obj_dir)

