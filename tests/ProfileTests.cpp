#include <array>
#include <cassert>
#include <string_view>

class IReadinessRule {
 public:
  virtual ~IReadinessRule() = default;
  virtual bool passes(std::string_view evidenceTarget) const = 0;
};

class RequiredEvidenceRule final : public IReadinessRule {
 public:
  bool passes(std::string_view evidenceTarget) const override {
    return !evidenceTarget.empty();
  }
};

struct ProjectProfile {
  std::string_view title;
  std::string_view summary;
  std::string_view evidenceTarget;
  std::array<std::string_view, 9> tags;
};

constexpr ProjectProfile profile{
  "BBB Real-Time PRU Co-Processor Driver",
  "BeagleBone Black PRU project that runs timing-critical firmware on the 200MHz PRUs and exchanges high-speed sensor or encoder data with Linux through rpmsg.",
  "True real-time BBB subsystem control, PRU/Linux messaging, kernel boundary design, and high-speed hardware timing evidence.",
  {
    "C++17",
    "C++ Design Patterns",
    "SOLID",
    "BeagleBone Black",
    "PRU",
    "rpmsg",
    "Kernel driver",
    "Real-time control",
    "Encoder input"
  }
};

int main() {
  const RequiredEvidenceRule rule;
  assert(!profile.title.empty());
  assert(!profile.summary.empty());
  assert(rule.passes(profile.evidenceTarget));
  assert(profile.tags[0] == "C++17");
  return 0;
}
