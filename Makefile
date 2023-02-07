##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

NAME =	Battleship

SRC =	src/Battleship.c \
		src/others/help.c \
		src/others/init_structs.c \
		src/signals/attack_arrived.c \
		src/signals/char_cases.c \
		src/signals/conditions_hit_miss_arrived.c \
		src/signals/define_signals.c \
		src/signals/everything_recived.c \
		src/signals/hit_miss_arrived.c \
		src/signals/int_cases.c \
		src/signals/send_bin.c \
		src/signals/send_siguser2.c \
		src/signals/signal_handlers.c \
		src/modify_maps/build_ship.c \
		src/modify_maps/change_enemy_host_map.c \
		src/modify_maps/change_enemy_joiner_map.c \
		src/modify_maps/edit_user_map.c \
		src/modify_maps/generate_maps.c \
		src/transformations/bin_to_pos.c \
		src/transformations/clean_bin.c \
		src/transformations/pos_0_num_0.c \
		src/transformations/pos_1_num_1.c \
		src/transformations/pos_to_num.c \
		src/transformations/pos_to_signal.c \
		src/transformations/transform_first_char.c \
		src/transformations/transform_second_char.c \
		src/parsing/change_lastchar.c \
		src/parsing/first_cases.c \
		src/parsing/generate_clean_map.c \
		src/parsing/generate_user_map.c \
		src/parsing/parsing.c \
		src/parsing/read_file.c \
		src/parsing/second_cases.c \
		src/parsing/switch_char.c \
		src/parsing/amount_of_lines.c \
		src/checks/check_for_win.c \
		src/checks/check_hit_or_miss.c \
		src/checks/check_if_attack_valid.c \
		src/positions/get_x_positions.c \
		src/positions/get_y_positions.c \
		src/actions/host_actions.c \
		src/actions/joiner_actions.c \
		src/error_handle/host_error_handling.c \
		src/error_handle/info_error_handling.c \
		src/error_handle/general_error_handling.c \
		src/error_handle/joiner_error_handling.c \
		src/error_handle/parsing_error_handling.c \
		src/prints/print_actions.c \
		src/prints/print_maps.c \
		src/prints/print_start.c \
		src/prints/print_interactions.c \

OBJ = $(SRC:.c=.o)

LIBMY = -C lib/c-lib

LIBR = -L lib/c-lib/ -lmy

CFLAGS += -I ./include/ -I ./lib/c-lib/include -g3

all: $(NAME)

$(NAME): make_lib $(OBJ)
	gcc -o $(NAME) $(OBJ) $(LIBR)
	rm -f ./src/*.o
	rm -f ./src/actions/*.o
	rm -f ./src/checks/*.o
	rm -f ./src/error_handle/*.o
	rm -f ./src/modify_maps/*.o
	rm -f ./src/others/*.o
	rm -f ./src/parsing/*.o
	rm -f ./src/positions/*.o
	rm -f ./src/prints/*.o
	rm -f ./src/signals/*.o
	rm -f ./src/transformations/*.o

make_lib:
	$(MAKE) $(LIBMY)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	make fclean -C ./lib/c-lib/

test_run:
	gcc -o unit_tests unit_tests/soko_tests.c $(CFLAGS)
	rm -f *.gcda
	rm -f *.gcno
	./unit_tests
	rm -f ./unit_tests

re: fclean all
