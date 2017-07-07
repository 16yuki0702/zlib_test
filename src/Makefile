-include ../Makefile.include

CC	= $(CROSS)gcc
AR	= $(CROSS)ar
STRIP	= $(CROSS)strip
CFLAGS	= -Wall -O2 -MMD -MP
LDFLAGS	+= -L../lib -lz
INCLUDE += -I../inc
TARGET	= test
OBJDIR	= ./obj
ifeq "$(strip $(ObJDIR))" ""
	OBJDIR	= .
endif
SOURCES	= $(wildcard *.c)
OBJECTS	= $(addprefix $(OBJDIR)/, $(SOURCES:.c=.o))
DEPENDS	= $(OBJECTS:.o=.d)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^ $(LDFLAGS)
	$(STRIP) $@

$(OBJDIR)/%.o: $.c
	@[ -d $(OBJDIR) ] || mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

all: clean $(TARGET)

clean:
	rm -rf $(OBJDIR) $(DEPENDS) $(TARGET)

-include $(DEPENDS)
