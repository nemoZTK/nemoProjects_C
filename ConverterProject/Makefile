#
# 'make'        build executable file 'main'
# 'make clean'  removes all .o, .d and executable files
#

# define the C compiler to use
CC = gcc

# define any compile-time flags
CFLAGS	:= -Wall -Wextra -g -lm

# define library paths in addition to /usr/lib
LFLAGS =

# define output directory
OUTPUT	:= output

# define source directory
SRC		:= src

# define include directory
INCLUDE	:= include

# define lib directory
LIB		:= lib

# define object files directory
OBJDIR	:= obj

# define dependency files directory
DEPDIR	:= dep

ifeq ($(OS),Windows_NT)
MAIN	:= main.exe
SOURCEDIRS	:= $(SRC)
INCLUDEDIRS	:= $(INCLUDE)
LIBDIRS		:= $(LIB)
FIXPATH = $(subst /,\,$1)
RM			:= del /q /f
MD	:= mkdir
else
MAIN	:= main
SOURCEDIRS	:= $(shell find $(SRC) -type d)
INCLUDEDIRS	:= $(shell find $(INCLUDE) -type d)
LIBDIRS		:= $(shell find $(LIB) -type d)
FIXPATH = $1
RM = rm -f
MD	:= mkdir -p
endif

# define any directories containing header files other than /usr/include
INCLUDES	:= $(patsubst %,-I%, $(INCLUDEDIRS:%/=%))

# define the C libs
LIBS		:= $(patsubst %,-L%, $(LIBDIRS:%/=%))

# define the C source files
SOURCES		:= $(wildcard $(patsubst %,%/*.c, $(SOURCEDIRS)))

# define the C object files (now in OBJDIR)
OBJECTS		:= $(patsubst $(SRC)/%.c,$(OBJDIR)/%.o,$(SOURCES))

# define the dependency output files (now in DEPDIR)
DEPS		:= $(patsubst $(SRC)/%.c,$(DEPDIR)/%.d,$(SOURCES))

# create all necessary object directories
OBJDIRS	:= $(sort $(dir $(OBJECTS)))

#
# The following part of the makefile is generic; it can be used to 
# build any executable just by changing the definitions above and by
# deleting dependencies appended to the file from 'make depend'
#

OUTPUTMAIN	:= $(call FIXPATH,$(OUTPUT)/$(MAIN))

all: $(OUTPUT) $(OBJDIRS) $(DEPDIR) $(MAIN)
	@echo Executing 'all' complete!

$(OUTPUT) $(DEPDIR):
	$(MD) $@

# Create all necessary subdirectories in OBJDIR
$(OBJDIRS):
	$(MD) $@

$(MAIN): $(OBJECTS) 
	$(CC) $(CFLAGS) $(INCLUDES) -o $(OUTPUTMAIN) $(OBJECTS) $(LFLAGS) $(LIBS)

# include all .d files
-include $(DEPS)

# this is a suffix replacement rule for building .o's and .d's from .c's
# it uses automatic variables $<: the name of the prerequisite of
# the rule(a .c file) and $@: the name of the target of the rule (a .o file) 
# -MMD generates dependency output files same name as the .o file
# (see the gnu make manual section about automatic variables)
$(OBJDIR)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -MMD $< -o $@
	@mv -f $(patsubst %.o,%.d,$@) $(DEPDIR)/

.PHONY: clean
clean:
	$(RM) $(OUTPUTMAIN)
	$(RM) $(call FIXPATH,$(OBJDIR)/*.o)
	$(RM) $(call FIXPATH,$(DEPDIR)/*.d)
	@find $(OBJDIR) -type f -name '*.o' -delete
	@find $(DEPDIR) -type f -name '*.d' -delete
	@echo Cleanup complete!

run: all
	./$(OUTPUTMAIN)
	@echo Executing 'run: all' complete!
