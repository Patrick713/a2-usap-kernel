cmd_net/sched/sch_netem.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/sched/sch_netem.ko net/sched/sch_netem.o net/sched/sch_netem.mod.o;  true
