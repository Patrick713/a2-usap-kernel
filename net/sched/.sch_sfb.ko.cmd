cmd_net/sched/sch_sfb.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_sfb.ko net/sched/sch_sfb.o net/sched/sch_sfb.mod.o;  true
