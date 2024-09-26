# Created by Zaur Rajabov with the help from GPT-4o.

ifndef WEEK
  $(error Please specify the WEEK variable, ex. `make WEEK=2`.)
endif

WEEK_DIR := week$(WEEK)
TEST_DIR := $(WEEK_DIR)/test

SRCS := $(wildcard $(WEEK_DIR)/*.c)
OUTS := $(patsubst $(WEEK_DIR)/%.c, $(TEST_DIR)/%, $(SRCS))

all: check_week_dir check_test_dir $(OUTS)

$(TEST_DIR)/%: $(WEEK_DIR)/%.c
	gcc $< -o $@ -lm

check_week_dir:
	@if [ ! -d "$(WEEK_DIR)" ]; then \
	  echo "Error: The directory for WEEK $(WEEK) does not exist."; \
	  exit 1; \
	fi

check_test_dir:
	@mkdir -p $(TEST_DIR)

clean:
	rm -rf $(TEST_DIR)/*

.PHONY: all clean check_week_dir check_test_dir

