#pragma once

namespace ruleOfFive {

    // class purely for classes that need to follow Rule Of Five
    struct RuleOfFive {

        RuleOfFive() = default;

        RuleOfFive(const RuleOfFive& f) = delete;

        RuleOfFive(RuleOfFive&& f) = delete;

        RuleOfFive& operator=(const RuleOfFive& f) = delete;

        RuleOfFive& operator=(const RuleOfFive&& f) = delete;

        virtual ~RuleOfFive() = delete;
    };
}