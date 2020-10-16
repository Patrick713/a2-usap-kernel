cmd_net/sched/act_nat.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/act_nat.ko net/sched/act_nat.o net/sched/act_nat.mod.o;  true
