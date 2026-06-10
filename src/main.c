#include <stdio.h>
#include <stddef.h>

typedef struct {
  const char *title;
  const char *summary;
  const char *evidence_target;
  const char *tags[8];
  size_t tag_count;
} project_profile_t;

static const project_profile_t profile = {
  "BBB Real-Time PRU Co-Processor Driver",
  "BeagleBone Black PRU project that runs timing-critical firmware on the 200MHz PRUs and exchanges high-speed sensor or encoder data with Linux through rpmsg.",
  "True real-time BBB subsystem control, PRU/Linux messaging, kernel boundary design, and high-speed hardware timing evidence.",
  {
  "BeagleBone Black",
  "PRU",
  "rpmsg",
  "Kernel driver",
  "Real-time control",
  "Encoder input"
  },
  6u
};

int main(void) {
  printf("%s\n", profile.title);
  printf("Summary: %s\n", profile.summary);
  printf("Evidence target: %s\n", profile.evidence_target);
  printf("Stack:");

  for (size_t index = 0; index < profile.tag_count; ++index) {
    printf(" %s%s", profile.tags[index], index + 1u == profile.tag_count ? "" : ",");
  }

  printf("\n");
  return 0;
}
