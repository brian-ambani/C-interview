#include <stdlib.h>
#include <stddef.h>

/**
 * a function that split a string and convert it into an array of words.
 *
 *
 *
 */

size_t count_words(const char *words)
{
// count the number of words
// this function will be used to allocate the right amount of memory so it has to be correct!


	return (0);
}

void do_test (const char *words, size_t nb_words, const char *const expected[nb_words]);

#define ARR_LEN(array) (sizeof((array)) / sizeof((array)[0]))
#define sample_test(words, expected) do_test(words, ARR_LEN(expected), expected)

Test(tests_suite, sample_tests)
{
	sample_test("", ((const char *const []){}));
	sample_test("word", ((const char *const []){"word"}));
	sample_test("Robin Singh", ((const char *const []){"Robin", "Singh"}));
	sample_test("a b c", ((const char *const []){"a", "b", "c"}));
	sample_test("I love arrays they are my favorite", ((const char *const []){"I", "love", "arrays", "they", "are", "my", "favorite"}));
}

