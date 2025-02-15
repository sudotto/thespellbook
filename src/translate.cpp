#include <iostream>
#include <vector>

#include "translate.h"

/////////////////////////////
// TRANSLATION CLASS
/////////////////////////////

Translation::Translation(std::string sym, std::string eng, std::string snd){
	symbol = sym;
	english = eng;
	sound = snd;
}

/////////////////////////////
// TRANSLATION LIST
/////////////////////////////

std::vector<Translation> translations = {
	Translation("♂", "red", "Ā"),
	Translation("𐌙", "yellow", "Ū"),
	Translation("փ", "blue", "Ē"),
	Translation("⫰", "black", "Ō"),
	Translation("♁", "white", "Ī"),
	Translation("🜃", "solid", "Oo"),
	Translation("▽", "liquid", "Ōō"),
	Translation("🜁", "gas", "Oh"),
	Translation("△", "magic", "Oy"),
	Translation("P", "big", "E"),
	Translation("Ϸ", "medium", "I"),
	Translation("b", "small", "O"),
	Translation("∔", "dot", "Ar"),
	Translation("∓", "line", "Ār"),
	Translation("🜿", "square", "Ir"),
	Translation("♀", "circle", "Or"),
	Translation("🜍", "triangle", "Ur"),
	Translation("∞", "many", "P"),
	Translation("⎈", "chaos/any", "Wh"),
	Translation("𝈘", "man", "V"),
	Translation("ψ", "plant", "Z"),
	Translation("Ұ", "animal", "R"),
	Translation("ⵅ", "woman", "F"),
	Translation("⥑", "happy", "B"),
	Translation("𝈲", "sad", "D"),
	Translation("K", "angry", "A"),
	Translation("T", "good", "J"),
	Translation("Σ", "life", "K"),
	Translation("Ω", "time", "ǂ"),
	Translation("ṷ", "me", "L"),
	Translation("ꘫ", "acknowledge", "N"),
	Translation("௨", "space", "T"),
	Translation("Π", "and", "Ch"),
	Translation("ɱ", "or", "S"),
	Translation("Ю", "xor", "Ng"),
	Translation("ϴ", "has", "Th"),
	Translation("ϴ", "is", "Th"),
	Translation("თ", "use", "Zh"),
	Translation("Ꙕ", "transform", "G"),
	Translation("⚯", "movement", "M"),
	Translation("|", "yes", "Kh"),
	Translation("O", "no", "Sch"),
	Translation("O", "not", "Sch"),
	Translation("𝈘△", "wizard", "VOy"),
	Translation("", "goblin", "VOy"),
};
