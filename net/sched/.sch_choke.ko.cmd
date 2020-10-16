cmd_net/sched/sch_choke.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_choke.ko net/sched/sch_choke.o net/sched/sch_choke.mod.o;  true
