#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe5ac272c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x20906cd5, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x8a9880f2, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbeeaa6bc, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0xb9e7b75f, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x6a030dea, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb1190c50, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xc200e91c, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x5ab83b2b, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x776c76a7, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0xfef94796, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xd73d9016, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x4c89beea, __VMLINUX_SYMBOL_STR(tty_vhangup) },
	{ 0xc13428a7, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x24a99692, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9ffb166a, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3274113b, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0xdcd12b50, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0xcb9b2bf2, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0x9a7c6381, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf2496fa5, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xb4fc735b, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xf72cc9e5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1a575020, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xfd1248b2, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xc718612b, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xab40cca9, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa850dafc, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x4407963f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x24abe0a0, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf2997713, __VMLINUX_SYMBOL_STR(tty_termios_hw_change) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x99f53f34, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x8cc0c856, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xbfee1eb1, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0x1d88a7b5, __VMLINUX_SYMBOL_STR(tty_standard_install) },
	{ 0xaacc3134, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xcc039afe, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x66b34d7f, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xb714dd90, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xd25e16e3, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x9bc6ef31, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x74a48d06, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x5ca9bfd6, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x84bc974b, __VMLINUX_SYMBOL_STR(__arch_copy_from_user) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb35dea8f, __VMLINUX_SYMBOL_STR(__arch_copy_to_user) },
	{ 0x763d0a1d, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0xbcfbacee, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0xa81a1c3f, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0x6e52ea5a, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x510b9fe, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x6db21259, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0x719a5ede, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x700cc42d, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x526c3a6c, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x65345022, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x97fdbab9, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x4829a47e, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x96220280, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8cdf978a, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0xf1f3c32e, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0xc326c1b8, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x8fa8f791, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x20ffa7f6, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x2eea26d5, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xae8c4d0c, __VMLINUX_SYMBOL_STR(set_bit) },
	{ 0xa7c899a4, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd79b2b7, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9a908b80, __VMLINUX_SYMBOL_STR(test_and_clear_bit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1A86p7523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p7522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86p5523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A86pE523d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4348p5523d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E033D604EAE908AC72926F2");
