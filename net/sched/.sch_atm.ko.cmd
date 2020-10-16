cmd_net/sched/sch_atm.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_atm.ko net/sched/sch_atm.o net/sched/sch_atm.mod.o;  true
