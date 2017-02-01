//
//  Options.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Options_hpp
#define Options_hpp
////////////////////////////////////////////////World options
const int DEF_WORLD_SIZE = 1;
const int DEF_SPECIES_NUM = 5;

////////////////////////////////////////////////Biome options
const int DEF_BIOME_SIZE = 50;

////////////////////////////////////////////////Weather options
const bool DAY_NIGHT_CYCLE = true;
const int DAY_LENGTH = 12;
const int NIGHT_LENGTH = 12;

////////////////////////////////////////////////Species options
const int DEF_SPECIES_SEED_POP = 10;

////////////////////////////////////////////////Lifeform options
const int DEF_LIFEFORM_WATER = 100;
const int DEF_LIFEFORM_ENERGY = 100;

////////////////////////////////////////////////Plant options

////////////////////////////////////////////////Animal options

////////////////////////////////////////////////Genome options

////////////////////////////////////////////////Regulator options
const int DEF_REGULATOR_WEIGHT = 50;
const int DEF_REGULATOR_DRIFT = 2;
const int DEF_GENES_PER_REG = 3;

////////////////////////////////////////////////Gene options
const int DEF_GENE_VALUE = 10;
const int DEF_GENE_DRIFT = 10;
const int DEF_DRIFT_DRIFT = 10;//denominator of drift-drift change, applied to drift
#endif /* Options_hpp */
