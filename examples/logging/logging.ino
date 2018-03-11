#include "Logger.h"

Logger logger;

void setup() {
  Serial.begin(115200);

  logger.printf("\nSETING DEBUG\n\n");
  logger.setLevel(logger.DEBUG);

  logger.debug("No %s %d\n", "elo", 320);
  logger.info("No %s %d\n", "elo", 420);
  logger.error("No %s %d\n", "elo", 520);

  logger.printf("\nSETING INFO\n\n");
  logger.setLevel(logger.INFO);

  logger.debug("No %s %d\n", "elo", 320);
  logger.info("No %s %d\n", "elo", 420);
  logger.error("No %s %d\n", "elo", 520);

  logger.printf("\nSETING ERROR\n\n");
  logger.setLevel(logger.ERROR);

  logger.debug("No %s %d\n", "elo", 320);
  logger.info("No %s %d\n", "elo", 420);
  logger.error("No %s %d\n", "elo", 520);

  logger.printf("\nSETING NONE\n\n");
  logger.setLevel(logger.NONE);

  logger.debug("No %s %d\n", "elo", 320);
  logger.info("No %s %d\n", "elo", 420);
  logger.error("No %s %d\n", "elo", 520);
}

void loop() {
  // put your main code here, to run repeatedly:
}
